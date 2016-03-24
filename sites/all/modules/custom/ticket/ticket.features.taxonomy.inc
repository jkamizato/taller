<?php
/**
 * @file
 * ticket.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ticket_taxonomy_default_vocabularies() {
  return array(
    'categoria_ticket' => array(
      'name' => 'Categoria ticket',
      'machine_name' => 'categoria_ticket',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'produto' => array(
      'name' => 'Produto',
      'machine_name' => 'produto',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
