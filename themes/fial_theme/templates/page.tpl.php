
<div id="skipnav" class="element-invisible">
  <div class="container">
    <p>Skip to:</p>
    <ul>
      <li><a href="#content" class="element-invisible element-focusable"><?php print t('Skip to content'); ?></a></li>
      <?php if ($main_menu): ?>
      <li><a href="#main-menu" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a></li>
      <?php endif; ?>
    </ul>
  </div>
</div>
<!-- /#skipnav -->


<?php
/*
if ((($user->uid) && ($page['admin_shortcuts'])) || (($user->uid) && ($secondary_nav))) {
  ?>
  <div id="admin-shortcuts" class="admin-shortcuts clearfix">
    <?php print render($secondary_nav); ?> <?php print render($page['admin_shortcuts']); ?>
  </div>
  <?php
}
*/

?>
<!-- /#admin-shortcuts -->

<?php
// Checks if current page is jquery-incompatible
//echo current_path();
if (current_path() == "node/463") { ?>
<script src="http://code.jquery.com/jquery-1.8.0.min.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/jquery.expander.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/custom-jquery.expander.js"></script>
<?php } ?>

<?php
// Checks if current page is jquery-incompatible
//echo current_path();
if (current_path() == "node/3296") { ?>
<script src="http://code.jquery.com/jquery-1.8.0.min.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/jquery.expander.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/custom-jquery.expander.js"></script>
<?php } ?>

<?php
// Checks if current page is jquery-incompatible
//echo current_path();
if (current_path() == "node/514") { ?>
<script src="http://code.jquery.com/jquery-1.8.0.min.js">
  $( document ).ajaxStart(function() {
  stButtons.locateElements();
});

</script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/jquery.expander.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/custom-jquery.expander.js"></script>
<?php } ?>


<?php
// to add multiselect option to add node of Member event
if (current_path() == "node/add/custom-event") { ?>

<link rel="stylesheet" type="text/css" href="/sites/default/themes/fial_theme/css/jquery.multiselect.css" />
<link rel="stylesheet" type="text/css" href="http://ajax.googleapis.com/ajax/libs/jqueryui/1/themes/ui-lightness/jquery-ui.css" />
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.js"></script>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jqueryui/1/jquery-ui.min.js"></script>
<script type="text/javascript" src="/sites/default/themes/fial_theme/js/jquery.multiselect.js"></script>
<script type="text/javascript">
$(function(){

$("#edit-field-activity-type-und,#edit-field-market-und,#edit-field-sector-und").each(function(){
    $(this).multiselect({
     header: false,
  });
});

});
</script>

<?php } ?>




<script type="text/javascript">
(function(){
   var f = function() {
     stButtons.locateElements();
   };
   window.setInterval(f, 2000);
   f();
})();

</script>

<script src="http://platform.linkedin.com/in.js" type="text/javascript"></script>

<!--Drupal Jquery (1.8)-->
<!--
<script type='text/javascript' src='http://os.alfajango.com/js/jquery-1.9.1.min.js'></script>
-->
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.scrollTo.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.toc.min.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.sharrre-1.2.0.min.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.ba-hashchange.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.easytabs.min.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/raptorize/jquery.raptorize.1.0.js'></script>
<script type='text/javascript' src='http://os.alfajango.com/js/jquery.easing.1.3.js'></script>

<!-- This is the wonky font embedding
<script type="text/javascript" src="http://fast.fonts.net/jsapi/b23760be-4be4-4e65-b79d-771dcea8a674.js"></script>
 -->

<link href='http://fonts.googleapis.com/css?family=Open+Sans+Condensed:300,700|Open+Sans:300' rel='stylesheet' type='text/css'>

<!--Custom Jquery, needs manual adding due to Drupal hooks-->


<div class="ui-mobile-menu visible-phone hidden-desktop">

  <div id="tab-container" class="tab-container">
    
      <div class="tab_logo tab"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"> &nbsp; </a></div>
    <ul class="etabs">
      <li class="tab"><a href="#tabs1-menu" class="icon-reorder icon-2x">&nbsp;</a></li>
    </ul>

    <div class="ui-tab-content" id="tabs1-menu">
      <?php //echo $mobile['block_menu'];
      print drupal_render(menu_tree_output(menu_tree_all_data('menu-mobile-menu'))); ?>
    </div>
   
<!--    
    <div class="ui-tab-content" id="tabs1-search">
      <?php //echo $mobile['block_search']; ?>
    </div>

     <div class="ui-tab-content" id="tabs1-profile">
      <?php //echo $mobile['block_profile']; ?>
    </div>
--> 
  
  </div>

</div>

<script type="text/javascript">

jQuery(document).ready(function($) {
    $('#tab-container').easytabs({
      collapsedByDefault: true
      , collapsible: true
    }).bind('easytabs:after', function() {
      $('html, body').animate({
        scrollTop: $(this).offset().top
      }, 0);      
    });
    $('.ui-tab-content').height($(window).height());
    $('.ui-mobile-menu .etabs').height('50');
    //alert('salam');
});

</script>

<style type="text/css">
  
.ui-mobile-menu {
  position: absolute;
  top: 0;
  left: 0;
  width: 100%;
  z-index: 1000;
}
.ui-mobile-menu ul {
  list-style: none;
}
.ui-mobile-menu li{
  float: right;
}
.ui-mobile-menu li a{
  display: block;
  padding: 10px;
}
.ui-mobile-menu li a{

}

.ui-tab-content {
  background-color: gray;
}

</style>
<!-- new Header Top block -->
<?php if (($page['header_top_middle']) || ($page['search_box']) || ($page['header_bottom_left']) || ($page['header_bottom_right'])): ?>
  <div id="header" class="clearfix header visible-desktop hidden-phone" role="banner">
    <div class="container" id="header_container">
      <div class="row-fluid" id="header_top" >       
        <div id="logo" class="span4 site-logo visible-desktop hidden-phone"> <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"> &nbsp; </a>
        </div>       
        <?php if ($page['header_top_middle']): ?>
        <div id="header_top_middle" class="span8 last"> <?php print render($page['header_top_middle']); ?>
        </div>
        <?php endif; ?>
        <?php if ($page['search_box']): ?>
        <div id="search-box" class="span2 last"> <?php print render($page['search_box']); ?>
        </div>
        <?php endif; ?>
      </div>
      <div class="row-fluid" id="header_bottom">
        <?php if ($page['header_bottom_left']): ?>
        <div class="span6 "> <?php print render($page['header_bottom_left']); ?>
        </div>
        <?php endif; ?>
        <?php if ($page['header_bottom_right']): ?>
        <div id="header_bottom_right" class="span6 last"> <?php print render($page['header_bottom_right']); ?>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>

     <?php if ($page['header']): ?>
   <div class="row-fluid">
        <div id="header-content" class="row-fluid header-content"><?php print render($page['header']); ?></div>
   </div>

   <?php endif; ?>
        <!-- /#header-content -->   
<?php endif; ?>
<!-- End of new Header Top block -->



<?php if (!drupal_is_front_page()): ?>
<div class="clearfix main page-title" role="contentinfo">
      <!--<div class="container" style="margin-top:-40px;">-->
      <h1 class="title" id="page-title"> <?php
          function fialTruncateTitle($string,$length,$append) {
            $string = trim($string);

            if(strlen($string) > $length) {
              $string = wordwrap($string, $length);
              $string = explode("\n",$string);
              $string = array_shift($string) . $append;
            }
            return $string;
          }
      print fialTruncateTitle($title,40,"&hellip;"); ?> </h1>
      <!--</div>-->
</div>
<?php endif; ?>

<div id="main" class="clearfix main" role="main">
  <div class="container">
    <?php if ($breadcrumb): ?><?php echo $mobile['block_menu']; ?>
    <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>
    
    
    <?php if ($page['main_top']): ?>
    <div id="main-top" class="row-fluid main-top"> <?php print render($page['main_top']); ?> </div>
    <?php endif; ?>
    <?php if ($page['main_upper']): ?>
    <div id="main-upper" class="row-fluid main-upper"> <?php print render($page['main_upper']); ?> </div>
    <?php endif; ?>



    <div id="main-content" class="row main-content">
      <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="sidebar span3 site-sidebar-first">
        <div class="row-fluid"><?php print render($page['sidebar_first']); ?></div>
      </div>
      <!-- /#sidebar-first -->
      <?php endif; ?>
      <div id="content" class="mc-content <?php if (($page['sidebar_first']) && ($page['sidebar_second'])): print 'span6'; elseif (($page['sidebar_first']) || ($page['sidebar_second'])): print 'span9'; else: print 'span12'; endif; ?>">
        <div id="content-wrapper" class="content-wrapper">
          <div id="content-head" class="row-fluid content-head">
            <div id="highlighted" class="clearfix"><?php print render($page['highlighted']); ?></div>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
            <!--<h1 class="title" id="page-title"> <?php //print $title; ?> </h1>-->
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?>
            <div class="tabs"> <?php print render($tabs); ?> </div>
            <?php endif; ?>
            <?php if ($messages): ?>
            <div id="console" class="clearfix"><?php print $messages; ?></div>
            <?php endif; ?>
            <?php if ($page['help']): ?>
            <div id="help" class="clearfix"> <?php print render($page['help']); ?> </div>
            <?php endif; ?>
            <?php if ($action_links): ?>
            <ul class="action-links">
              <?php print render($action_links); ?>
            </ul>
            <?php endif; ?>
          </div>
          <?php if ($page['content_top']): ?>
          <div id="content-top" class="row-fluid content-top"> <?php print render($page['content_top']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_upper']): ?>
          <div id="content-upper" class="row-fluid content-upper"> <?php print render($page['content_upper']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_row2']): ?>
          <div id="content-row2" class="row-fluid content-row2"> <?php print render($page['content_row2']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col2-1']) || ($page['content_col2-2'])): ?>
          <div id="content-col2" class="row-fluid content-col2">
            <?php if ($page['content_col2-1']): ?>
            <div class="span6">
              <div id="content-col2-1" class="span12 clearfix clear-row"> <?php print render($page['content_col2-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col2-2']): ?>
            <div class="span6">
              <div id="content-col2-2" class="span12 clearfix clear-row"> <?php print render($page['content_col2-2']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_row3']): ?>
          <div id="content-row3" class="row-fluid content-row3"> <?php print render($page['content_row3']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col3-1']) || ($page['content_col3-2']) || ($page['content_col3-3'])): ?>
          <div id="content-col3" class="row-fluid content-col3">
            <?php if ($page['content_col3-1']): ?>
            <div class="span4">
              <div id="content-col3-1" class="span12 clearfix clear-row"> <?php print render($page['content_col3-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col3-2']): ?>
            <div class="span4">
              <div id="content-col3-2" class="span12 clearfix clear-row"> <?php print render($page['content_col3-2']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col3-3']): ?>
            <div class="span4">
              <div id="content-col3-3" class="span12 clearfix clear-row"> <?php print render($page['content_col3-3']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_row4']): ?>
          <div id="content-row4" class="row-fluid content-row4"> <?php print render($page['content_row4']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col4-1']) || ($page['content_col4-2']) || ($page['content_col4-3']) || ($page['content_col4-4'])): ?>
          <div id="content-col4" class="row-fluid content-col4">
            <?php if ($page['content_col4-1']): ?>
            <div class="span3">
              <div id="content-col4-1" class="span12 clearfix clear-row"> <?php print render($page['content_col4-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-2']): ?>
            <div class="span3">
              <div id="content-col4-2" class="span12 clearfix clear-row"> <?php print render($page['content_col4-2']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-3']): ?>
            <div class="span3">
              <div id="content-col4-3" class="span12 clearfix clear-row"> <?php print render($page['content_col4-3']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-4']): ?>
            <div class="span3">
              <div id="content-col4-4" class="span12 clearfix clear-row"> <?php print render($page['content_col4-4']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_lower']): ?>
          <div id="content-lower" class="row-fluid content-lower"> <?php print render($page['content_lower']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_bottom']): ?>
          <div id="content-bottom" class="row-fluid content-bottom"> <?php print render($page['content_bottom']); ?> </div>
          <?php endif; ?>
        </div>
        <!-- /#content-wrap -->
      </div>
      <!-- /#content -->
      <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="sidebar span3 site-sidebar-second">
        <div class="row-fluid"><?php print render($page['sidebar_second']); ?></div>
      </div>
      <!-- /#sidebar-second -->
      <?php endif; ?>
    </div>
    <?php if ($page['main_lower']): ?>
    <div id="main-lower" class="row-fluid main-lower"> <?php print render($page['main_lower']); ?> </div>
    <?php endif; ?>
    <?php if ($page['main_bottom']): ?>
    <div id="main-bottom" class="row-fluid main-bottom"> <?php print render($page['main_bottom']); ?> </div>
    <?php endif; ?>
  </div>
</div>
<!-- /#main, /#main-wrapper -->
<?php if ($page['footer']): ?>
<div id="footer" class="clearfix site-footer footerbg" role="contentinfo">
  <div class="container">
  <div id="footer-content" class="row-fluid footer-content"> <?php print render($page['footer']); ?></div>
  </div>
</div>

<div class="clearfix site-footer" role="contentinfo">
<div class="container" style="margin-top:-40px;">
<img src="/sites/default/themes/fial_theme/img/footer-left-crest.png" align="left"><a href="http://www.linkedin.com/company/6417119?trk=tyah&trkInfo=clickedVertical%3Acompany%2CclickedEntityId%3A6417119%2Cidx%3A3-1-3%2CtarId%3A1455769918231%2Ctas%3Afood%20innovation%20austra" target="_blank"><img src="/sites/default/themes/fial_theme/img/footer-right-linkedin.png" align="right"></a>
</div>
</div>
<!-- /#footer -->
<?php endif; ?>
