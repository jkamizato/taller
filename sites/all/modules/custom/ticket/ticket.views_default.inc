<?php
/**
 * @file
 * ticket.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ticket_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tickets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tickets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bem vindo ao Suporte da Taller Test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ticket_codigo' => 'field_ticket_codigo',
    'field_ticket_categoria' => 'field_ticket_categoria',
    'field_ticket_produto' => 'field_ticket_produto',
    'created' => 'created',
    'field_ticket_atualizacao' => 'field_ticket_atualizacao',
    'field_ticket_atendido_user' => 'field_ticket_atendido_user',
    'field_ticket_status' => 'field_ticket_status',
    'views_conditional' => 'views_conditional',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ticket_codigo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_categoria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_produto' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_atualizacao' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_atendido_user' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ticket_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_conditional' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Código */
  $handler->display->display_options['fields']['field_ticket_codigo']['id'] = 'field_ticket_codigo';
  $handler->display->display_options['fields']['field_ticket_codigo']['table'] = 'field_data_field_ticket_codigo';
  $handler->display->display_options['fields']['field_ticket_codigo']['field'] = 'field_ticket_codigo';
  $handler->display->display_options['fields']['field_ticket_codigo']['label'] = 'Código do Ticket';
  $handler->display->display_options['fields']['field_ticket_codigo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_codigo']['alter']['text'] = '<a href="/node/[nid]">[field_ticket_codigo]</a>';
  /* Field: Content: Categoria */
  $handler->display->display_options['fields']['field_ticket_categoria']['id'] = 'field_ticket_categoria';
  $handler->display->display_options['fields']['field_ticket_categoria']['table'] = 'field_data_field_ticket_categoria';
  $handler->display->display_options['fields']['field_ticket_categoria']['field'] = 'field_ticket_categoria';
  $handler->display->display_options['fields']['field_ticket_categoria']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Produto */
  $handler->display->display_options['fields']['field_ticket_produto']['id'] = 'field_ticket_produto';
  $handler->display->display_options['fields']['field_ticket_produto']['table'] = 'field_data_field_ticket_produto';
  $handler->display->display_options['fields']['field_ticket_produto']['field'] = 'field_ticket_produto';
  $handler->display->display_options['fields']['field_ticket_produto']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Criado em';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Última atualização */
  $handler->display->display_options['fields']['field_ticket_atualizacao']['id'] = 'field_ticket_atualizacao';
  $handler->display->display_options['fields']['field_ticket_atualizacao']['table'] = 'field_data_field_ticket_atualizacao';
  $handler->display->display_options['fields']['field_ticket_atualizacao']['field'] = 'field_ticket_atualizacao';
  $handler->display->display_options['fields']['field_ticket_atualizacao']['settings'] = array(
    'format_type' => 'medium_brasil',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Atendido por */
  $handler->display->display_options['fields']['field_ticket_atendido_user']['id'] = 'field_ticket_atendido_user';
  $handler->display->display_options['fields']['field_ticket_atendido_user']['table'] = 'field_data_field_ticket_atendido_user';
  $handler->display->display_options['fields']['field_ticket_atendido_user']['field'] = 'field_ticket_atendido_user';
  $handler->display->display_options['fields']['field_ticket_atendido_user']['empty'] = '--';
  $handler->display->display_options['fields']['field_ticket_atendido_user']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_ticket_status']['id'] = 'field_ticket_status';
  $handler->display->display_options['fields']['field_ticket_status']['table'] = 'field_data_field_ticket_status';
  $handler->display->display_options['fields']['field_ticket_status']['field'] = 'field_ticket_status';
  $handler->display->display_options['fields']['field_ticket_status']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Status';
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_ticket_status';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'Aguardando';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<a href="/ticket/[nid]/resposta">Responder</a>';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_ticket_status] ';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ticket' => 'ticket',
  );
  /* Filter criterion: Content: Categoria (field_ticket_categoria) */
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['id'] = 'field_ticket_categoria_tid';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['table'] = 'field_data_field_ticket_categoria';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['field'] = 'field_ticket_categoria_tid';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['expose']['operator_id'] = 'field_ticket_categoria_tid_op';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['expose']['label'] = 'Categoria';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['expose']['operator'] = 'field_ticket_categoria_tid_op';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['expose']['identifier'] = 'field_ticket_categoria_tid';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ticket_categoria_tid']['vocabulary'] = 'categoria_ticket';
  /* Filter criterion: Content: Produto (field_ticket_produto) */
  $handler->display->display_options['filters']['field_ticket_produto_tid']['id'] = 'field_ticket_produto_tid';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['table'] = 'field_data_field_ticket_produto';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['field'] = 'field_ticket_produto_tid';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ticket_produto_tid']['expose']['operator_id'] = 'field_ticket_produto_tid_op';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['expose']['label'] = 'Produto';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['expose']['operator'] = 'field_ticket_produto_tid_op';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['expose']['identifier'] = 'field_ticket_produto_tid';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_ticket_produto_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ticket_produto_tid']['vocabulary'] = 'produto';
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tickets';
  $export['tickets'] = $view;

  return $export;
}
