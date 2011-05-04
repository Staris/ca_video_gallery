<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_video_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_video_gallery_video';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-2',
    'path' => '3',
    'page_title' => '-4',
  );

  $export['content_extra_weights_ca_video_gallery_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_video_gallery_video';
  $strongarm->value = 'form-0ebf1b63f5883c27caeee27831f187c2';

  $export['form_build_id_ca_video_gallery_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_video_gallery_video';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_video_gallery_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ca_video_gallery_video';
  $strongarm->value = '';

  $export['page_title_type_ca_video_gallery_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_ca_video_gallery_video_showfield';
  $strongarm->value = 1;

  $export['page_title_type_ca_video_gallery_video_showfield'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_video_gallery_video_pattern';
  $strongarm->value = 'videos/[title-raw]';

  $export['pathauto_node_ca_video_gallery_video_pattern'] = $strongarm;
  return $export;
}
