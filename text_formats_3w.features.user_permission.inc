<?php

/**
 * Implements hook_user_default_permissions().
 */
function text_formats_3w_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format 1
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format extended
  $permissions['use text format extended_html'] = array(
    'name' => 'use text format extended_html',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format extended
  $permissions['use text format editor'] = array(
    'name' => 'use text format editor',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
