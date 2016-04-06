<?php
/**
 * @file
 * test_og_features_permission_node_sdfsdfsdfsdf.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function test_og_features_permission_node_sdfsdfsdfsdf_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:sdfsdfsdfsdf:add user'
  $permissions['node:sdfsdfsdfsdf:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:administer group'
  $permissions['node:sdfsdfsdfsdf:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:approve and deny subscription'
  $permissions['node:sdfsdfsdfsdf:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:manage members'
  $permissions['node:sdfsdfsdfsdf:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:manage permissions'
  $permissions['node:sdfsdfsdfsdf:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:manage roles'
  $permissions['node:sdfsdfsdfsdf:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:subscribe'
  $permissions['node:sdfsdfsdfsdf:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:subscribe without approval'
  $permissions['node:sdfsdfsdfsdf:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:unsubscribe'
  $permissions['node:sdfsdfsdfsdf:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:sdfsdfsdfsdf:update group'
  $permissions['node:sdfsdfsdfsdf:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
