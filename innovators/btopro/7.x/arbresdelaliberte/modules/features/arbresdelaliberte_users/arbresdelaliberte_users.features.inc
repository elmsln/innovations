<?php
/**
 * @file
 * arbresdelaliberte_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function arbresdelaliberte_users_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
