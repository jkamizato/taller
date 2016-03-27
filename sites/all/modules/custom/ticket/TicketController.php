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

}