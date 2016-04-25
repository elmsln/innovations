<?php
/**
 * @file
 * mapbyaddressfield_node_location_address_innovate_elmsln.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mapbyaddressfield_node_location_address_innovate_elmsln_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__location_address_innovate_elmsln';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__location_address_innovate_elmsln'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_location_address_innovate_elmsln';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_location_address_innovate_elmsln'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_location_address_innovate_elmsln';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_location_address_innovate_elmsln'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_location_address_innovate_elmsln';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_location_address_innovate_elmsln'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_location_address_innovate_elmsln';
  $strongarm->value = '1';
  $export['node_preview_location_address_innovate_elmsln'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_location_address_innovate_elmsln';
  $strongarm->value = 1;
  $export['node_submitted_location_address_innovate_elmsln'] = $strongarm;

  return $export;
}
