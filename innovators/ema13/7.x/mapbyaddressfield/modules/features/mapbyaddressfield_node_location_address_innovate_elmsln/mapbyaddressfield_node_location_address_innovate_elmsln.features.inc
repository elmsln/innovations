<?php
/**
 * @file
 * mapbyaddressfield_node_location_address_innovate_elmsln.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mapbyaddressfield_node_location_address_innovate_elmsln_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mapbyaddressfield_node_location_address_innovate_elmsln_node_info() {
  $items = array(
    'location_address_innovate_elmsln' => array(
      'name' => t('Location - By Address'),
      'base' => 'node_content',
      'description' => t('A location based upon an address field.'),
      'has_title' => '1',
      'title_label' => t('Location'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
