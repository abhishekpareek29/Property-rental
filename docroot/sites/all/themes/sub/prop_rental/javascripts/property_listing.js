(function($) {
  Drupal.behaviors.property_listing = {
    attach: function (context, settings) {

      $(document).ready(function($) {
        // hidden until user hit the passwrd textfield.
        $('.pl_buttons .pl_interested').on("click", function() {
          $('#block-entityform-block-ef-interested-in-property').addClass('pl-show-interested-form');
          var nid = $(this).attr("data");
          console.log(nid);
          $('#block-entityform-block-ef-interested-in-property .field-name-field-ef-interested-in-property #edit-field-ef-interested-in-property-und').val(nid);
        });
        $('.close-interested-form').on("click", function() {
          $('#block-entityform-block-ef-interested-in-property').removeClass('pl-show-interested-form');
        });
      });
    }
  }
}(jQuery));
