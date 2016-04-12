<?php
/**
 * @file
 * testproconnor15_node_testing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function testproconnor15_node_testing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function testproconnor15_node_testing_node_info() {
  $items = array(
    'testing' => array(
      'name' => t('Testing'),
      'base' => 'node_content',
      'description' => t('This is a test'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
