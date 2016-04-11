<?php
/**
 * @file
 * fakerubric_node_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fakerubric_node_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fakerubric_node_section_node_info() {
  $items = array(
    'section' => array(
      'name' => t('Course Section'),
      'base' => 'node_content',
      'description' => t('A section of this course'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
