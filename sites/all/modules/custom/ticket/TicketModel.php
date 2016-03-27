<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 20:10
 */
namespace Ticket\Model;

class TicketModel
{
    public function __construct(){

    }
    public function get($ticket_id) {
        return node_load($ticket_id);
    }
}