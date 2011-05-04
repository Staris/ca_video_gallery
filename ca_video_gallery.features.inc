<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_video_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ca_video_gallery_node_info() {
  $items = array(
    'ca_video_gallery_video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('This content type is used to add new videos to the video gallery section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_video_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
