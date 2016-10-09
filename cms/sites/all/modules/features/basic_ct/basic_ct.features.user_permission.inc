<?php
/**
 * @file
 * basic_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create canjeo_puntos content'.
  $permissions['create canjeo_puntos content'] = array(
    'name' => 'create canjeo_puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create paciente content'.
  $permissions['create paciente content'] = array(
    'name' => 'create paciente content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create puntos content'.
  $permissions['create puntos content'] = array(
    'name' => 'create puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any canjeo_puntos content'.
  $permissions['delete any canjeo_puntos content'] = array(
    'name' => 'delete any canjeo_puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any paciente content'.
  $permissions['delete any paciente content'] = array(
    'name' => 'delete any paciente content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any puntos content'.
  $permissions['delete any puntos content'] = array(
    'name' => 'delete any puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own canjeo_puntos content'.
  $permissions['delete own canjeo_puntos content'] = array(
    'name' => 'delete own canjeo_puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own paciente content'.
  $permissions['delete own paciente content'] = array(
    'name' => 'delete own paciente content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own puntos content'.
  $permissions['delete own puntos content'] = array(
    'name' => 'delete own puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any canjeo_puntos content'.
  $permissions['edit any canjeo_puntos content'] = array(
    'name' => 'edit any canjeo_puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any paciente content'.
  $permissions['edit any paciente content'] = array(
    'name' => 'edit any paciente content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any puntos content'.
  $permissions['edit any puntos content'] = array(
    'name' => 'edit any puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own canjeo_puntos content'.
  $permissions['edit own canjeo_puntos content'] = array(
    'name' => 'edit own canjeo_puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own paciente content'.
  $permissions['edit own paciente content'] = array(
    'name' => 'edit own paciente content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own puntos content'.
  $permissions['edit own puntos content'] = array(
    'name' => 'edit own puntos content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
