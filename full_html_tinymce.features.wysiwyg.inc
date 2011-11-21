<?php
/**
 * @file
 * full_html_tinymce.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function full_html_tinymce_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'strikethrough' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'justifyfull' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'forecolor' => 1,
          'backcolor' => 1,
          'sup' => 1,
          'sub' => 1,
          'code' => 1,
          'hr' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
          'removeformat' => 1,
          'charmap' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'autosave' => array(
          'autosave' => 1,
        ),
        'contextmenu' => array(
          'contextmenu' => 1,
        ),
        'font' => array(
          'fontselect' => 1,
          'fontsizeselect' => 1,
        ),
        'inlinepopups' => array(
          'inlinepopups' => 1,
        ),
        'insertdatetime' => array(
          'insertdate' => 1,
          'inserttime' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
          'selectall' => 1,
        ),
        'preview' => array(
          'preview' => 1,
        ),
        'print' => array(
          'print' => 1,
        ),
        'searchreplace' => array(
          'search' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'media' => array(
          'media' => 1,
        ),
        'advlist' => array(
          'advlist' => 1,
        ),
        'wordcount' => array(
          'wordcount' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 0,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'none',
      'css_path' => '',
      'css_classes' => '',
    ),
  );

  return $profiles;
}
