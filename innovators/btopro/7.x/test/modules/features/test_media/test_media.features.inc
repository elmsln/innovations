<?php
/**
 * @file
 * test_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function test_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function test_media_image_default_styles() {
  $styles = array();

  // Exported image style: foundation_access_lmsless_bar.
  $styles['foundation_access_lmsless_bar'] = array(
    'label' => 'Foundation Access lmsless bar',
    'effects' => array(
      1 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: foundation_access_profile.
  $styles['foundation_access_profile'] = array(
    'label' => 'Foundation Access Profile',
    'effects' => array(
      2 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'smartcrop_scale_effect',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: large.
  $styles['large'] = array(
    'label' => 'Large (480x480)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 480,
          'upscale' => 0,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: medium.
  $styles['medium'] = array(
    'label' => 'Medium (220x220)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: thumbnail.
  $styles['thumbnail'] = array(
    'label' => 'Thumbnail (100x100)',
    'effects' => array(
      0 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 1,
          '#imageinfo_cache_effect_callback' => 'image_scale_effect',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: wysiwyg_template_thumbnail.
  $styles['wysiwyg_template_thumbnail'] = array(
    'effects' => array(
      0 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 100,
          'height' => 70,
          '#imageinfo_cache_effect_callback' => 'image_resize_effect',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'wysiwyg_template_thumbnail',
  );

  return $styles;
}
