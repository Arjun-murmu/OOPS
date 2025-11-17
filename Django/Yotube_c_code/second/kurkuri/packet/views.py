from django.shortcuts import render
from .models import DifferentPackets, PacketReview
from django.shortcuts import get_object_or_404

# Create your views here.
def all_packet(request):
    packets = DifferentPackets.objects.all()
    reviews = PacketReview.objects.all()
    context = {
        'packets': packets,
        'reviews': reviews
    }
    return render(request, 'packet/all_packet.html', context)

def details_packets(request, packet_id):
    packet = get_object_or_404(DifferentPackets, pk=packet_id)
    return render(request, 'packet/packet_dec.html', {'packet' : packet })

def order(request):
    return render(request, 'packet/order.html')