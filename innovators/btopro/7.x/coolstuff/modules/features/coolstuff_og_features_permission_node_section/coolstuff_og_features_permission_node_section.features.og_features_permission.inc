<?php
/**
 * @file
 * coolstuff_og_features_permission_node_section.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function coolstuff_og_features_permission_node_section_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:section:add user'
  $permissions['node:section:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:administer group'
  $permissions['node:section:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:section:approve and deny subscription'
  $permissions['node:section:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:manage members'
  $permissions['node:section:manage members'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:manage permissions'
  $permissions['node:section:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:manage roles'
  $permissions['node:section:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:subscribe'
  $permissions['node:section:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:subscribe without approval'
  $permissions['node:section:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:unsubscribe'
  $permissions['node:section:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:section:update group'
  $permissions['node:section:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
