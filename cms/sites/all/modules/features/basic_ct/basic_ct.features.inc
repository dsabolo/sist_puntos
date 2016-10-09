<?php
/**
 * @file
 * basic_ct.features.inc
 */

/**
 * Implements hook_node_info().
 */
function basic_ct_node_info() {
  $items = array(
    'canjeo_puntos' => array(
      'name' => t('Canjeo Puntos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Id_internal'),
      'help' => '',
    ),
    'paciente' => array(
      'name' => t('Paciente'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
