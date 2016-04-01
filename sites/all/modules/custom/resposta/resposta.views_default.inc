<?php
/**
 * @file
 * resposta.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function resposta_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'historico_resposta';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Histórico de antendimento';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Histórico de antendimento';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Data';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Enviar arquivo */
  $handler->display->display_options['fields']['field_resposta_arquivo']['id'] = 'field_resposta_arquivo';
  $handler->display->display_options['fields']['field_resposta_arquivo']['table'] = 'field_data_field_resposta_arquivo';
  $handler->display->display_options['fields']['field_resposta_arquivo']['field'] = 'field_resposta_arquivo';
  $handler->display->display_options['fields']['field_resposta_arquivo']['label'] = 'Arquivo';
  $handler->display->display_options['fields']['field_resposta_arquivo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_resposta_arquivo']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Ticket (field_resposta_ticket) */
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['id'] = 'field_resposta_ticket_target_id';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['table'] = 'field_data_field_resposta_ticket';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['field'] = 'field_resposta_ticket_target_id';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_resposta_ticket_target_id']['summary_options']['items_per_page'] = '25';
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
    'resposta' => 'resposta',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['historico_resposta'] = $view;

  return $export;
}
