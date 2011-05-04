<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_video_gallery_user_default_roles() {
  $roles = array();

  // Exported role: video administrator
  $roles['video administrator'] = array(
    'name' => 'video administrator',
  );

  return $roles;
}
