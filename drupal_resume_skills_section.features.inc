<?php
/**
 * @file
 * drupal_resume_skills_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_skills_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_skills_section_node_info() {
  $items = array(
    'skills' => array(
      'name' => t('Skills'),
      'base' => 'node_content',
      'description' => t('Here is where you would list your skills and the details about the skills, such as when last used, skill level, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
