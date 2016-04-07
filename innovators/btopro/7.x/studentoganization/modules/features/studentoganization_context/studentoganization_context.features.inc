<?php
/**
 * @file
 * studentoganization_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function studentoganization_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
