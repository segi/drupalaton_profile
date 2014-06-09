<?php
/**
 * @file
 * drupalaton_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalaton_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'fronpage';
  $page->task = 'page';
  $page->admin_title = 'Fronpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_fronpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'fronpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 'main-row',
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sponsow',
        ),
        'parent' => 'main',
        'class' => 'sponsor',
      ),
      'sponsow' => array(
        'type' => 'region',
        'title' => 'Sponsor',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'bottom' => NULL,
      'sponsow' => array(
        'corner_location' => 'pane',
      ),
    ),
    'sponsow' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6f3c7443-853b-47c7-bb2d-efe6574ac698';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '1',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $display->content['new-727805bc-f60c-4e62-a221-7c54fcbd6ed2'] = $pane;
    $display->panels['bottom'][0] = 'new-727805bc-f60c-4e62-a221-7c54fcbd6ed2';
    $pane = new stdClass();
    $pane->pid = 'new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '4',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 sponsor_packages',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $display->content['new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6'] = $pane;
    $display->panels['bottom'][1] = 'new-cb5bea3b-83ad-4d24-a77a-bd7296595cc6';
    $pane = new stdClass();
    $pane->pid = 'new-43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'Tickets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $display->content['new-43948b8c-2486-4f3a-9a4f-d23878fdabae'] = $pane;
    $display->panels['bottom'][2] = 'new-43948b8c-2486-4f3a-9a4f-d23878fdabae';
    $pane = new stdClass();
    $pane->pid = 'new-7787364b-d64c-45e0-a547-648b5ac359e8';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7787364b-d64c-45e0-a547-648b5ac359e8';
    $display->content['new-7787364b-d64c-45e0-a547-648b5ac359e8'] = $pane;
    $display->panels['bottom'][3] = 'new-7787364b-d64c-45e0-a547-648b5ac359e8';
    $pane = new stdClass();
    $pane->pid = 'new-f59b39e2-1b17-46f6-b932-3269bae50996';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'contactmin',
      'css_class' => 'contactmin container_12',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f59b39e2-1b17-46f6-b932-3269bae50996';
    $display->content['new-f59b39e2-1b17-46f6-b932-3269bae50996'] = $pane;
    $display->panels['bottom'][4] = 'new-f59b39e2-1b17-46f6-b932-3269bae50996';
    $pane = new stdClass();
    $pane->pid = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'keynote_speakers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => 'Keynote Speakers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'rounded_corners',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 keynote',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '949be1fe-2e50-4321-98ba-bea2753edb0d';
    $display->content['new-949be1fe-2e50-4321-98ba-bea2753edb0d'] = $pane;
    $display->panels['center'][0] = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
    $pane = new stdClass();
    $pane->pid = 'new-d3788035-6524-4013-a865-4d599b3db6e4';
    $pane->panel = 'sponsow';
    $pane->type = 'views_panes';
    $pane->subtype = 'sponsors-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container_12 sponsors',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3788035-6524-4013-a865-4d599b3db6e4';
    $display->content['new-d3788035-6524-4013-a865-4d599b3db6e4'] = $pane;
    $display->panels['sponsow'][0] = 'new-d3788035-6524-4013-a865-4d599b3db6e4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-949be1fe-2e50-4321-98ba-bea2753edb0d';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['fronpage'] = $page;

  return $pages;

}
