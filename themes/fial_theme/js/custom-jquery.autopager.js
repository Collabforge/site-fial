(function ($) {
  Drupal.behaviors.viewsInfiniteScroll = {
    attach: function (context, settings) {
      $(function(){
        var $container = $('div.autopager div.view-content');
        $container.imagesLoaded( function(){
          $container.infinitescroll({
            navSelector  : 'div.autopager .pager',    // selector for the paged navigation
            nextSelector : 'div.autopager .pager-next a',  // selector for the NEXT link (to page 2)
            itemSelector : 'div.autopager .views-row',     // selector for all items you'll retrieve
            loading: {
              finishedMsg: 'No more pages to load.',
              img: Drupal.settings.basePath + 'sites/all/themes/YOURTHEME/images/loading.gif'
            }
        })
    })
  });
  }
};
})(jQuery);

$('#body').infinitescroll({
      navSelector  : "a#next:last",
                     // selector for the paged navigation (it will be hidden)
      nextSelector : "a#next:last",
                     // selector for the NEXT link (to page 2)
      itemSelector : "#body p"
                     // selector for all items you'll retrieve
    });
    // kill scroll binding
    $(window).unbind('.infscr');
    // hook up the manual click guy.
    $('a#next').click(function(){
      $(document).trigger('retrieve.infscr');
      return false;
    });
    // remove the paginator when we're done.
    $(document).ajaxError(function(e,xhr,opt){
      if (xhr.status == 404) $('a#next').remove();
    })