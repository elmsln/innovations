<?php
/**
 * @file
 * studentoganization_node_student_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studentoganization_node_student_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function studentoganization_node_student_organization_node_info() {
  $items = array(
    'student_organization' => array(
      'name' => t('Student organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
