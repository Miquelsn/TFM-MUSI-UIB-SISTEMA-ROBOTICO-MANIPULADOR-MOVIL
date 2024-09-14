# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from propio/ProcessImageRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ProcessImageRequest(genpy.Message):
  _md5sum = "c3629fc6e9ff898d8cea360736afbdb7"
  _type = "propio/ProcessImageRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# ProcessImage.srv
bool isFront
"""
  __slots__ = ['isFront']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       isFront

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ProcessImageRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.isFront is None:
        self.isFront = False
    else:
      self.isFront = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.isFront
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.isFront,) = _get_struct_B().unpack(str[start:end])
      self.isFront = bool(self.isFront)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.isFront
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 1
      (self.isFront,) = _get_struct_B().unpack(str[start:end])
      self.isFront = bool(self.isFront)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from propio/ProcessImageResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class ProcessImageResponse(genpy.Message):
  _md5sum = "6360014842298dfa59757f88b3fec273"
  _type = "propio/ProcessImageResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Pose pose
float64 distance
bool needsArm
int32 numberObjects
geometry_msgs/Vector3 dimensions 

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['pose','distance','needsArm','numberObjects','dimensions']
  _slot_types = ['geometry_msgs/Pose','float64','bool','int32','geometry_msgs/Vector3']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       pose,distance,needsArm,numberObjects,dimensions

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ProcessImageResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.distance is None:
        self.distance = 0.
      if self.needsArm is None:
        self.needsArm = False
      if self.numberObjects is None:
        self.numberObjects = 0
      if self.dimensions is None:
        self.dimensions = geometry_msgs.msg.Vector3()
    else:
      self.pose = geometry_msgs.msg.Pose()
      self.distance = 0.
      self.needsArm = False
      self.numberObjects = 0
      self.dimensions = geometry_msgs.msg.Vector3()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_8dBi3d().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.distance, _x.needsArm, _x.numberObjects, _x.dimensions.x, _x.dimensions.y, _x.dimensions.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.dimensions is None:
        self.dimensions = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 93
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.distance, _x.needsArm, _x.numberObjects, _x.dimensions.x, _x.dimensions.y, _x.dimensions.z,) = _get_struct_8dBi3d().unpack(str[start:end])
      self.needsArm = bool(self.needsArm)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_8dBi3d().pack(_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.distance, _x.needsArm, _x.numberObjects, _x.dimensions.x, _x.dimensions.y, _x.dimensions.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.pose is None:
        self.pose = geometry_msgs.msg.Pose()
      if self.dimensions is None:
        self.dimensions = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 93
      (_x.pose.position.x, _x.pose.position.y, _x.pose.position.z, _x.pose.orientation.x, _x.pose.orientation.y, _x.pose.orientation.z, _x.pose.orientation.w, _x.distance, _x.needsArm, _x.numberObjects, _x.dimensions.x, _x.dimensions.y, _x.dimensions.z,) = _get_struct_8dBi3d().unpack(str[start:end])
      self.needsArm = bool(self.needsArm)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_8dBi3d = None
def _get_struct_8dBi3d():
    global _struct_8dBi3d
    if _struct_8dBi3d is None:
        _struct_8dBi3d = struct.Struct("<8dBi3d")
    return _struct_8dBi3d
class ProcessImage(object):
  _type          = 'propio/ProcessImage'
  _md5sum = '37b472b910195c5295b6dd8ac539437e'
  _request_class  = ProcessImageRequest
  _response_class = ProcessImageResponse
