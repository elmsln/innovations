<?php
/**
 * @file
 * fakerubric_node_rubric.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fakerubric_node_rubric_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fakerubric_node_rubric_node_info() {
  $items = array(
    'rubric' => array(
      'name' => t('Rubric'),
      'base' => 'node_content',
      'description' => t('Rubric type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
