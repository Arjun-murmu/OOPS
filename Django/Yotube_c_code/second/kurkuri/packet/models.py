from django.db import models
from django.utils import timezone
from django.contrib.auth.models import User

# Create your models here.
class DifferentPackets(models.Model):
    PACKET_TYPE_CHOICE = [
        ('TED', 'TEDAMEDA'),
        ('BI', 'BINGO RED'),
        ('LE', 'LEGE RED'),
        ('PO', 'POTATO GREEN'),
        ('MI', 'MIXTURE'),
    ]
    name = models.CharField(max_length=50)
    image = models.ImageField(upload_to = 'packets/')
    date_added = models.DateTimeField(default=timezone.now)
    type = models.CharField(max_length=3, choices=PACKET_TYPE_CHOICE)
    description = models.TextField(default = '')

    def __str__(self):
        return self.name

#one to many
class PacketReview(models.Model):
    RATING_CHOOSE = [
        ('1','Bad'),
        ('2', 'ok'),
        ('3', 'Normal'),
        ('4', 'Good'),
        ('5', 'Very Good'),
        ]
    pack = models.ForeignKey(DifferentPackets, on_delete=models.CASCADE, related_name='reviews')
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    rating = models.CharField(max_length=2, choices=RATING_CHOOSE)
    date_added = models.DateTimeField(default=timezone.now)
    comment = models.TextField()

    def __str__(self):
        return f'{self.user.username} reviews for {self.pack.name}'
    

#many to many 
class Store(models.Model):
    name = models.CharField(max_length=100)
    location = models.CharField(max_length=100)
    diff_packet = models.ManyToManyField(DifferentPackets, related_name='stores')

    def __str__(self):
        return self.name
    
#one to one
class PacketProof(models.Model):
    pack = models.OneToOneField(DifferentPackets, on_delete=models.CASCADE, related_name = 'certificate')
    certificate_proof = models.CharField(max_length=100)
    issued_date = models.DateTimeField(default=timezone.now)
    valid_until = models.DateField()

    def __str__(self):
        return f'Certificate for {self.pack.name}'