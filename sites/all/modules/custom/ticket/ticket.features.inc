<?php
/**
 * @file
 * ticket.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ticket_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ticket_node_info() {
  $items = array(
    'ticket' => array(
      'name' => t('Ticket'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
