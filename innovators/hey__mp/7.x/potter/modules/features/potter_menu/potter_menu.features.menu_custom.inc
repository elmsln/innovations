<?php
/**
 * @file
 * potter_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function potter_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-elmsln-add.
  $menus['menu-elmsln-add'] = array(
    'menu_name' => 'menu-elmsln-add',
    'title' => 'Add menu',
    'description' => 'Menu that has content users can add to the system',
  );
  // Exported menu: menu-elmsln-navigation.
  $menus['menu-elmsln-navigation'] = array(
    'menu_name' => 'menu-elmsln-navigation',
    'title' => 'Navigation menu',
    'description' => 'Navigational links for using this tool',
  );
  // Exported menu: menu-elmsln-settings.
  $menus['menu-elmsln-settings'] = array(
    'menu_name' => 'menu-elmsln-settings',
    'title' => 'Settings menu',
    'description' => 'Modify settings with your course network or this tool',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add menu');
  t('Development');
  t('Development link');
  t('Main menu');
  t('Management');
  t('Menu that has content users can add to the system');
  t('Modify settings with your course network or this tool');
  t('Navigation');
  t('Navigation menu');
  t('Navigational links for using this tool');
  t('Settings menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
