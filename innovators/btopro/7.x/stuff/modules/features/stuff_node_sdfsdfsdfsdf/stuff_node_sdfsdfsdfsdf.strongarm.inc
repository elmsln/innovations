<?php
/**
 * @file
 * stuff_node_sdfsdfsdfsdf.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stuff_node_sdfsdfsdfsdf_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sdfsdfsdfsdf';
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
  $export['field_bundle_settings_node__sdfsdfsdfsdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sdfsdfsdfsdf';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sdfsdfsdfsdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sdfsdfsdfsdf';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sdfsdfsdfsdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sdfsdfsdfsdf';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_sdfsdfsdfsdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sdfsdfsdfsdf';
  $strongarm->value = '1';
  $export['node_preview_sdfsdfsdfsdf'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sdfsdfsdfsdf';
  $strongarm->value = 1;
  $export['node_submitted_sdfsdfsdfsdf'] = $strongarm;

  return $export;
}
