<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/24/16
 * Time: 23:59
 */

include realpath(dirname(__FILE__)) . '/../phpunit_bootstrap.inc';

class DashboardTest extends PHPUnit_Extensions_Selenium2TestCase
{
    protected function setUp()
    {
        global $base_url;
        $this->setBrowser('chrome');
        $this->setBrowserUrl($base_url);
    }

    public function testAcceptancePageTickets()
    {
        $this->url('/tickets');

        $fieldSetTicket = $this->byTag('fieldset')->byTag('legend')->text();

        $this->assertContains('Bem vindo ao Suporte', $this->byTag('body')->text());
        $this->assertContains('Abrir um novo ticket', $this->source());
        $this->assertContains('Histórico de tickets', $fieldSetTicket);
    }

}