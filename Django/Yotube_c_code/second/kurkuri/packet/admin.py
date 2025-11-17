from django.contrib import admin
from .models import DifferentPackets,PacketReview,Store, PacketProof

# Register your models here.
class PacketReviewLine(admin.TabularInline):
    model = PacketReview
    extra = 2

class DiffPacketAdmin(admin.ModelAdmin):
    list_display = ('name', 'type', 'date_added')
    inlines = [PacketReviewLine]

class StoreAdmin(admin.ModelAdmin):
    list_display = ('name', 'location')
    filter_horizontal = ('diff_packet', )

class PacketCerAdmin(admin.ModelAdmin):
    list_display = ('pack', 'certificate_proof')

admin.site.register(DifferentPackets,DiffPacketAdmin)
admin.site.register(Store,StoreAdmin)
admin.site.register(PacketProof,PacketCerAdmin)

# admin.site.register(DifferentPackets)
# admin.site.register(PacketReview)

