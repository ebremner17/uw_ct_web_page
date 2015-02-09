<?php
/**
 * @file
 * uw_ct_web_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uw_ct_web_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-uw_web_page-body'
  $field_instances['node-uw_web_page-body'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'format' => 'uw_tf_standard',
      ),
    ),
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
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
          'uw_tf_basic' => 0,
          'uw_tf_contact' => 0,
          'uw_tf_standard' => 'uw_tf_standard',
          'uw_tf_standard_sidebar' => 0,
          'uw_tf_standard_site_footer' => 0,
          'uw_tf_standard_wide' => 'uw_tf_standard_wide',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => -6,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'uw_tf_basic' => array(
              'weight' => 0,
            ),
            'uw_tf_contact' => array(
              'weight' => -5,
            ),
            'uw_tf_standard' => array(
              'weight' => -10,
            ),
            'uw_tf_standard_sidebar' => array(
              'weight' => -8,
            ),
            'uw_tf_standard_site_footer' => array(
              'weight' => -7,
            ),
            'uw_tf_standard_wide' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_audience'
  $field_instances['node-uw_web_page-field_audience'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audience',
    'label' => 'Audience',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'term_reference_tree',
      'settings' => array(
        'cascading_selection' => 0,
        'filter_view' => '',
        'leaves_only' => 0,
        'max_depth' => '',
        'parent_term_id' => '',
        'select_parents' => 1,
        'start_minimized' => 1,
        'token_display' => '',
        'track_list' => 0,
      ),
      'type' => 'term_reference_tree',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_event_image'
  $field_instances['node-uw_web_page-field_event_image'] = array(
    'bundle' => 'uw_web_page',
    'deleted' => 0,
    'description' => 'The social media listing page image allows the use of an alternative image for Twitter Cards or Open Graph (Facebook) posts.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_image',
    'label' => 'Listing page image for social media',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'uploads/images',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '10 MB',
      'max_resolution' => '3000x3000',
      'min_resolution' => '50x50',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 1,
            'search_all_fields' => 1,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_banner-750w' => 0,
          'image_banner-wide' => 0,
          'image_body-500px-wide' => 'image_body-500px-wide',
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_image_gallery_slide' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_person-profile-list' => 0,
          'image_profile-photo-block' => 0,
          'image_sidebar-220px-wide' => 'image_sidebar-220px-wide',
          'image_thumbnail' => 0,
          'image_uw_service_icon' => 0,
          'image_wide-body-750px-wide' => 0,
          'link' => 0,
        ),
        'insert_width' => 500,
        'label_help_description' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_file'
  $field_instances['node-uw_web_page-field_file'] = array(
    'bundle' => 'uw_web_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_file',
    'label' => 'Choose a file',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'uploads/files',
      'file_extensions' => 'bib csv doc docx gz mp3 rtf pdf pot potx pps ppt pptx psd r tar tex txt wav xls xlsx zip',
      'max_filesize' => '25 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 1,
            'search_all_fields' => 1,
          ),
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_banner-750w' => 0,
          'image_body-500px-wide' => 0,
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_image_gallery_slide' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_person-profile-list' => 0,
          'image_profile-photo-block' => 0,
          'image_sidebar-220px-wide' => 0,
          'image_thumbnail' => 0,
          'image_wide-body-750px-wide' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_image'
  $field_instances['node-uw_web_page-field_image'] = array(
    'bundle' => 'uw_web_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'exclude_cv' => 0,
    'field_name' => 'field_image',
    'label' => 'Choose an image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'alt_field_required' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'uploads/images',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '10 MB',
      'max_resolution' => '3000x3000',
      'min_resolution' => '10x10',
      'title_field' => 0,
      'title_field_required' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 'reference',
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'copy',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 1,
            'search_all_fields' => 1,
          ),
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_body-500px-wide',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_banner-750w' => 0,
          'image_body-500px-wide' => 'image_body-500px-wide',
          'image_galleryformatter_slide' => 0,
          'image_galleryformatter_thumb' => 0,
          'image_image_gallery_slide' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_person-profile-list' => 0,
          'image_profile-photo-block' => 0,
          'image_sidebar-220px-wide' => 'image_sidebar-220px-wide',
          'image_thumbnail' => 0,
          'image_wide-body-750px-wide' => 'image_wide-body-750px-wide',
          'link' => 0,
        ),
        'insert_width' => 750,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
    'wysiwyg_imagefield' => 1,
  );

  // Exported field_instance: 'node-uw_web_page-field_related_link'
  $field_instances['node-uw_web_page-field_related_link'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add additional links related to content on this web page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_link',
    'label' => 'Add related links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'title' => 'required',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_sidebar_content'
  $field_instances['node-uw_web_page-field_sidebar_content'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => array(
      0 => array(
        'format' => 'uw_tf_standard_sidebar',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_content',
    'label' => 'Add complementary content',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'php_code' => 0,
          'plain_text' => 0,
          'uw_tf_basic' => 0,
          'uw_tf_contact' => 0,
          'uw_tf_standard' => 0,
          'uw_tf_standard_sidebar' => 'uw_tf_standard_sidebar',
          'uw_tf_standard_site_footer' => 0,
          'uw_tf_standard_wide' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => -6,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'uw_tf_basic' => array(
              'weight' => 0,
            ),
            'uw_tf_contact' => array(
              'weight' => -5,
            ),
            'uw_tf_standard' => array(
              'weight' => -10,
            ),
            'uw_tf_standard_sidebar' => array(
              'weight' => -8,
            ),
            'uw_tf_standard_site_footer' => array(
              'weight' => -7,
            ),
            'uw_tf_standard_wide' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_sidebar_note_content'
  $field_instances['node-uw_web_page-field_sidebar_note_content'] = array(
    'bundle' => 'uw_web_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 1,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_note_content',
    'label' => 'Note for wide web pages',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_sidebar_note_content_links'
  $field_instances['node-uw_web_page-field_sidebar_note_content_links'] = array(
    'bundle' => 'uw_web_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 2,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sidebar_note_content_links',
    'label' => 'Note for wide web pages (links)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-field_wide'
  $field_instances['node-uw_web_page-field_wide'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'When using wide pages, sidebar complementary content, sidebar related links, and any applicable promotional items will not be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'forward' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_wide',
    'label' => 'Wide Page Width',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'exclude_cv' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-uw_web_page-title_field'
  $field_instances['node-uw_web_page-title_field'] = array(
    'bundle' => 'uw_web_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'entity_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add additional links related to content on this web page.');
  t('Add complementary content');
  t('Add related links');
  t('Audience');
  t('Body');
  t('Choose a file');
  t('Choose an image');
  t('Listing page image for social media');
  t('Note for wide web pages');
  t('Note for wide web pages (links)');
  t('The social media listing page image allows the use of an alternative image for twitter cards or open graph (Facebook) posts.');
  t('Title');
  t('When using wide pages, sidebar complementary content, sidebar related links, and any applicable promotional items will not be displayed.');
  t('Wide Page Width');

  return $field_instances;
}
