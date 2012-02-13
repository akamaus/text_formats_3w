<?php

/**
 * Implements hook_filter_default_formats().
 */
function text_formats_3w_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML
  $formats['editor'] = array(
    'format' => 'editor',
    'name' => 'Editor',
    'cache' => '1',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'media_filter' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <b> <i> <u> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <table> <col> <tbody> <tr> <td> <th> <div> <h1> <h2> <h3> <p> <br>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

// Exported format: Extended
  $formats['extended_html'] = array(
    'format' => 'extended_html',
    'name' => 'Extended Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <b> <i> <u> <cite> <blockquote> <ul> <ol> <li> <dl> <dt> <dd> <table> <col> <tbody> <tr> <td> <th> <div> <h1> <h2> <h3> <p> <br>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

    // Exported format: Filtered HTML
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );


  // Exported format: Unfiltered
  $formats['unfiltered'] = array(
    'format' => 'unfiltered',
    'name' => 'Unfiltered',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
