var app= angular.module("app",[]);
app.controller("emp",function($scope){
    $scope.a=23;
    $scope.b=24;

    $scope.dosum=function(){
        $scope.sum=parseInt($scope.a)+parseInt($scope.b);
    };
});