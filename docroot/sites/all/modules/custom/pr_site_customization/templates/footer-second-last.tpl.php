<?php
/**
 * @file
 * Template file for second last footer.
 */
?>

<div class="container">
  <div class="row">
    <div class="footer-menu-items col-xs-12 col-md-6">
      <h2 class="sub-title">Reach far</h2>
      <?php print drupal_render($footer_menu_block['content']); ?>
    </div>
    <div class="contact-us-form col-xs-12 col-md-6">
      <h2 class="sub-title">Contact us</h2>
      <?php print $contact_us_block['content']; ?>
    </div>
  </div>
</div>
