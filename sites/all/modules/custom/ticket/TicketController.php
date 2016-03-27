<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 18:56
 */
include_once 'TicketModel.php';

class TicketController
{
    private $ticketModel;

    public function __construct() {
        $this->ticketModel = new TicketModel();
    }

}