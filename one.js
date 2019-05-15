$(function() {
   $("#datepicker").datepicker();
});
$(function(time) {
   $("#timepicker").timepicker();
});
$( function() { 
    $("#d1").draggable();
$( "#drop" ).droppable( 
        { 
            drop :function() 
        { 
            alert("I am dropped"); 
        } 
        } );  
} ); 
