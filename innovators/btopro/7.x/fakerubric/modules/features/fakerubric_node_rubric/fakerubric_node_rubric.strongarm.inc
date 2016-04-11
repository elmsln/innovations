<?php
/**
 * @file
 * fakerubric_node_rubric.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fakerubric_node_rubric_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rubric';
  $strongarm->value = array();
  $export['menu_options_rubric'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rubric';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rubric'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rubric';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_rubric'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rubric';
  $strongarm->value = '0';
  $export['node_preview_rubric'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rubric';
  $strongarm->value = 0;
  $export['node_submitted_rubric'] = $strongarm;

  return $export;
}
