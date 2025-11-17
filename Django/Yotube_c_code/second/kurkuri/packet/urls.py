from django.urls import path
from . import views

urlpatterns = [
    path('', views.all_packet, name = "all_packet"),
    path('<int:packet_id>/', views.details_packets, name = "details_packets"),

    path('order/', views.order, name="order"),
]
