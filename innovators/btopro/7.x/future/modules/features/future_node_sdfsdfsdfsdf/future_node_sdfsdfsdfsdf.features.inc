<?php
/**
 * @file
 * future_node_sdfsdfsdfsdf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function future_node_sdfsdfsdfsdf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function future_node_sdfsdfsdfsdf_node_info() {
  $items = array(
    'sdfsdfsdfsdf' => array(
      'name' => t('sdfsdfsdfsdf'),
      'base' => 'node_content',
      'description' => t('sdfsdf'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}