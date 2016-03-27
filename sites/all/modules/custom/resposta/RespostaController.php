<?php

/**
 * Created by PhpStorm.
 * User: julio
 * Date: 3/25/16
 * Time: 19:29
 */


namespace Resposta\Controller;
use Ticket\Model\TicketModel;
require_once __DIR__ . '/../ticket/TicketModel.php';


class RespostaController
{
    /** @var  TicketModel */
    private $ticketModel;

    public function __construct()
    {
        $this->ticketModel = new TicketModel();
    }

    public function saveValidation($ticket_nid)
    {
        $ticket = $this->ticketModel->get($ticket_nid);
        return $this->ticketIsAguardando($ticket);
    }

    public function ticketIsAguardando($ticket)
    {
        return $ticket->field_ticket_status[LANGUAGE_NONE][0]['value'] == 'aguardando';
    }
}