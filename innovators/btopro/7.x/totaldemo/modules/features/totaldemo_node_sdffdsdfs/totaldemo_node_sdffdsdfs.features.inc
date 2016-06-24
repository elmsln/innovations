<?php
/**
 * @file
 * totaldemo_node_sdffdsdfs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function totaldemo_node_sdffdsdfs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function totaldemo_node_sdffdsdfs_node_info() {
  $items = array(
    'sdffdsdfs' => array(
      'name' => t('sdffdsdfs'),
      'base' => 'node_content',
      'description' => t('fsfdssdf'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
