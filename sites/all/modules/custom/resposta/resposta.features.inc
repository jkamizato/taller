<?php
/**
 * @file
 * resposta.features.inc
 */

/**
 * Implements hook_views_api().
 */
function resposta_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function resposta_node_info() {
  $items = array(
    'resposta' => array(
      'name' => t('Resposta'),
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
