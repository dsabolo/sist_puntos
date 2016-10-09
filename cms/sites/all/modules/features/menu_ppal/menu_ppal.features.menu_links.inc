<?php
/**
 * @file
 * menu_ppal.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu_ppal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_canjear-puntos:node/add/canjeo-puntos.
  $menu_links['main-menu_canjear-puntos:node/add/canjeo-puntos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/canjeo-puntos',
    'router_path' => 'node/add/canjeo-puntos',
    'link_title' => 'Canjear Puntos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_canjear-puntos:node/add/canjeo-puntos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_nuevo-paciente:node/add/paciente.
  $menu_links['main-menu_nuevo-paciente:node/add/paciente'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/paciente',
    'router_path' => 'node/add/paciente',
    'link_title' => 'Nuevo Paciente',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_nuevo-paciente:node/add/paciente',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pacientes:pacientes.
  $menu_links['main-menu_pacientes:pacientes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pacientes',
    'router_path' => 'pacientes',
    'link_title' => 'Pacientes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pacientes:pacientes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_puntos:consultar-puntos.
  $menu_links['main-menu_puntos:consultar-puntos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'consultar-puntos',
    'router_path' => 'consultar-puntos',
    'link_title' => 'Puntos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_puntos:consultar-puntos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sumar-puntos:node/add/puntos.
  $menu_links['main-menu_sumar-puntos:node/add/puntos'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/puntos',
    'router_path' => 'node/add/puntos',
    'link_title' => 'Sumar Puntos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sumar-puntos:node/add/puntos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Canjear Puntos');
  t('Nuevo Paciente');
  t('Pacientes');
  t('Puntos');
  t('Sumar Puntos');

  return $menu_links;
}
