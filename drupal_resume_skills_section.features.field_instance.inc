<?php
/**
 * @file
 * drupal_resume_skills_section.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function drupal_resume_skills_section_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-skills-body'
  $field_instances['node-skills-body'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-skills-field_name_of_skill'
  $field_instances['node-skills-field_name_of_skill'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_name_of_skill',
    'label' => 'Name of Skill',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-skills-field_skill_last_used'
  $field_instances['node-skills-field_skill_last_used'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skill_last_used',
    'label' => 'Skill Last Used',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-skills-field_skill_level'
  $field_instances['node-skills-field_skill_level'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skill_level',
    'label' => 'Skill Level',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-skills-field_skill_years_experience'
  $field_instances['node-skills-field_skill_years_experience'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skill_years_experience',
    'label' => 'Skill Years Experience',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-skills-field_your_name'
  $field_instances['node-skills-field_your_name'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_your_name',
    'label' => 'Your Name',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Name of Skill');
  t('Skill Last Used');
  t('Skill Level');
  t('Skill Years Experience');
  t('Your Name');

  return $field_instances;
}
