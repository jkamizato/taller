<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 18:56
 */

namespace Ticket\Controller;
use Ticket\Model\TicketModel;


class TicketController
{
    private $ticketModel;

    public function __construct() {
        $this->ticketModel = new TicketModel();
    }

    public function presenceFieldsValidation($node)
    {
        $lang = $node->language;
        if ($node->field_ticket_categoria[$lang][0]['tid'] &&
            $node->field_ticket_produto[$lang][0]['tid'] &&
            $node->field_ticket_status[$lang][0]['value'] &&
            $node->body[$lang][0]['value'] &&
            $node->title
        ) {
            return true;
        }
        return false;
    }



}