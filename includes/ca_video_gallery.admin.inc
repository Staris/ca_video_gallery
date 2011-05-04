<?php

/**
 * Define the function ca_video_gallery_admin_settings_form().
 */
function ca_video_gallery_admin_settings_form() {
  $form = array();

  $form['video_list'] = array(
    '#type' => 'select',
    '#title' => t('Video Gallery\'s List Template'),
    '#options' => array(
      'ca_video_gallery_list_template_one' => t('Template One'),
      'ca_video_gallery_list_template_two' => t('Template Two'),
      'ca_video_gallery_list_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_video_gallery_list_template', 'ca_video_gallery_list_template_one'),
    '#required' => TRUE,
  );

  $form['video_node'] = array(
    '#type' => 'select',
    '#title' => t('Video Gallery\'s Node Template'),
    '#options' => array(
      'ca_video_gallery_node_template_one' => t('Template One'),
      'ca_video_gallery_node_template_two' => t('Template Two'),
      'ca_video_gallery_node_template_three' => t('Template Three'),
    ),
    '#default_value' => variable_get('ca_video_gallery_node_template', 'ca_video_gallery_node_template_one'),
    '#required' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('ca_video_gallery_admin_settings_form_submit'),
  );

  return $form;
}

/**
 * Define the function ca_video_gallery_admin_settings_form_submit().
 */
function ca_video_gallery_admin_settings_form_submit($form, &$form_state) {
  variable_set('ca_video_gallery_list_template', $form_state['values']['video_list']);
  variable_set('ca_video_gallery_node_template', $form_state['values']['video_node']);
  drupal_set_message('Configuration has been saved.');
}
