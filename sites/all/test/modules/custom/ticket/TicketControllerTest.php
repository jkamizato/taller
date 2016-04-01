<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/24/16
 * Time: 23:51
 */
use \Ticket\Controller\TicketController;

include realpath(dirname(__FILE__)) . '/../../../phpunit_bootstrap.inc';


class TicketModelTest extends  PHPUnit_Framework_TestCase
{
    /** @var  TicketController */
    private $ticketController;

    public function setUp() {
        $this->ticketController = new TicketController();
    }

    public function testClass() {
        $this->assertEquals('Ticket\Controller\TicketController', get_class($this->ticketController));
    }

    public function testPresenceFieldsMustReturnFalseProvider()
    {
        $lang = 'und';
        $node = new stdClass();
        $node->language = $lang;
        $node->field_ticket_categoria[$lang][0]['tid'] = 1234;
        $node->field_ticket_produto[$lang][0]['tid'] = 1234;
        $node->field_ticket_status[$lang][0]['value'] = null;
        $node->body[$lang][0]['value'] = 1234;
        $node->title = 1234;

        $node2 = new stdClass();
        $node2->language = $lang;
        $node2->field_ticket_categoria[$lang][0]['tid'] = null;
        $node2->field_ticket_produto[$lang][0]['tid'] = 1234;
        $node2->field_ticket_status[$lang][0]['value'] = 123;
        $node2->body[$lang][0]['value'] = 1234;
        $node2->title = 1234;


        $node3 = new stdClass();
        $node3->language = $lang;
        $node3->field_ticket_categoria[$lang][0]['tid'] = 1234;
        $node3->field_ticket_produto[$lang][0]['tid'] = 1234;
        $node3->field_ticket_status[$lang][0]['value'] = 123;
        $node3->body[$lang][0]['value'] = null;
        $node3->title = 1234;

        $node4 = new stdClass();
        $node4->language = $lang;
        $node4->field_ticket_categoria[$lang][0]['tid'] = 1234;
        $node4->field_ticket_produto[$lang][0]['tid'] = 1234;
        $node4->field_ticket_status[$lang][0]['value'] = 123;
        $node4->body[$lang][0]['value'] = 1234;
        $node4->title = null;

        return array(
            array($node),
            array($node2),
            array($node3),
            array($node4),
            array(null),
        );
    }

    /**
     * @dataProvider testPresenceFieldsMustReturnFalseProvider
     */
    public function testPresenceFieldsMustReturnFalse($node) {
        $this->assertFalse($this->ticketController->presenceFieldsValidation($node));
    }

    public function testPresenceFieldsValidation() {

        $node = new stdClass();
        $node->language = 'und';
        $node->field_ticket_categoria[$node->language][0]['tid'] = 1234;
        $node->field_ticket_produto[$node->language][0]['tid'] = 1234;
        $node->field_ticket_status[$node->language][0]['value'] = 1234;
        $node->body[$node->language][0]['value'] = 1234;
        $node->title = 1234;
        $this->assertTrue($this->ticketController->presenceFieldsValidation($node));
    }
}