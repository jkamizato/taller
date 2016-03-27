<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 20:10
 */


class TicketModel
{
    public function get($ticket_id) {
        return node_load($ticket_id);
    }
}