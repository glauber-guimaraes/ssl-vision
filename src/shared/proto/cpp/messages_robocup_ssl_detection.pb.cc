// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "messages_robocup_ssl_detection.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format_inl.h>

namespace {

const ::google::protobuf::Descriptor* SSL_DetectionBall_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SSL_DetectionBall_reflection_ = NULL;
const ::google::protobuf::Descriptor* SSL_DetectionRobot_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SSL_DetectionRobot_reflection_ = NULL;
const ::google::protobuf::Descriptor* SSL_DetectionFrame_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SSL_DetectionFrame_reflection_ = NULL;

}  // namespace


void protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto_AssignGlobalDescriptors(const ::google::protobuf::FileDescriptor* file) {
  SSL_DetectionBall_descriptor_ = file->message_type(0);
  SSL_DetectionBall::default_instance_ = new SSL_DetectionBall();
  static const int SSL_DetectionBall_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, area_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, pixel_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, pixel_y_),
  };
  SSL_DetectionBall_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SSL_DetectionBall_descriptor_,
      SSL_DetectionBall::default_instance_,
      SSL_DetectionBall_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionBall, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SSL_DetectionBall_descriptor_, SSL_DetectionBall::default_instance_);
  SSL_DetectionRobot_descriptor_ = file->message_type(1);
  SSL_DetectionRobot::default_instance_ = new SSL_DetectionRobot();
  static const int SSL_DetectionRobot_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, area_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, pixel_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, pixel_y_),
  };
  SSL_DetectionRobot_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SSL_DetectionRobot_descriptor_,
      SSL_DetectionRobot::default_instance_,
      SSL_DetectionRobot_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionRobot, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SSL_DetectionRobot_descriptor_, SSL_DetectionRobot::default_instance_);
  SSL_DetectionFrame_descriptor_ = file->message_type(2);
  SSL_DetectionFrame::default_instance_ = new SSL_DetectionFrame();
  static const int SSL_DetectionFrame_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, frame_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, camera_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, balls_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, robots_),
  };
  SSL_DetectionFrame_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SSL_DetectionFrame_descriptor_,
      SSL_DetectionFrame::default_instance_,
      SSL_DetectionFrame_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_DetectionFrame, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SSL_DetectionFrame_descriptor_, SSL_DetectionFrame::default_instance_);
  SSL_DetectionBall::default_instance_->InitAsDefaultInstance();
  SSL_DetectionRobot::default_instance_->InitAsDefaultInstance();
  SSL_DetectionFrame::default_instance_->InitAsDefaultInstance();
}

void protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  ::google::protobuf::DescriptorPool* pool =
    ::google::protobuf::DescriptorPool::internal_generated_pool();

  pool->InternalBuildGeneratedFile(
    "\n$messages_robocup_ssl_detection.proto\"Y"
    "\n\021SSL_DetectionBall\022\014\n\004area\030\001 \002(\r\022\t\n\001x\030\002"
    " \002(\002\022\t\n\001y\030\003 \002(\002\022\017\n\007pixel_x\030\004 \002(\021\022\017\n\007pixe"
    "l_y\030\005 \002(\021\"Z\n\022SSL_DetectionRobot\022\014\n\004area\030"
    "\001 \002(\r\022\t\n\001x\030\002 \002(\002\022\t\n\001y\030\003 \002(\002\022\017\n\007pixel_x\030\004"
    " \002(\021\022\017\n\007pixel_y\030\005 \002(\021\"\230\001\n\022SSL_DetectionF"
    "rame\022\024\n\014frame_number\030\001 \002(\r\022\021\n\ttimestamp\030"
    "\002 \002(\004\022\021\n\tcamera_id\030\003 \002(\r\022!\n\005balls\030\004 \003(\0132"
    "\022.SSL_DetectionBall\022#\n\006robots\030\005 \003(\0132\023.SS"
    "L_DetectionRobot", 376,
  &protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto_AssignGlobalDescriptors);
}

// Force BuildDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_5frobocup_5fssl_5fdetection_2eproto {
  StaticDescriptorInitializer_messages_5frobocup_5fssl_5fdetection_2eproto() {
    protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  }
} static_descriptor_initializer_messages_5frobocup_5fssl_5fdetection_2eproto_;


// ===================================================================






SSL_DetectionBall::SSL_DetectionBall()
  : ::google::protobuf::Message(),
    _cached_size_(0),
    area_(0u),
    x_(0),
    y_(0),
    pixel_x_(0),
    pixel_y_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

void SSL_DetectionBall::InitAsDefaultInstance() {}

SSL_DetectionBall::SSL_DetectionBall(const SSL_DetectionBall& from)
  : ::google::protobuf::Message(),
    _cached_size_(0),
    area_(0u),
    x_(0),
    y_(0),
    pixel_x_(0),
    pixel_y_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

SSL_DetectionBall::~SSL_DetectionBall() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* SSL_DetectionBall::descriptor() {
  if (SSL_DetectionBall_descriptor_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionBall_descriptor_;
}

const SSL_DetectionBall& SSL_DetectionBall::default_instance() {
  if (default_instance_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return *default_instance_;
}

SSL_DetectionBall* SSL_DetectionBall::default_instance_ = NULL;

SSL_DetectionBall* SSL_DetectionBall::New() const {
  return new SSL_DetectionBall;
}

const ::google::protobuf::Descriptor* SSL_DetectionBall::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* SSL_DetectionBall::GetReflection() const {
  if (SSL_DetectionBall_reflection_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionBall_reflection_;
}

// ===================================================================






SSL_DetectionRobot::SSL_DetectionRobot()
  : ::google::protobuf::Message(),
    _cached_size_(0),
    area_(0u),
    x_(0),
    y_(0),
    pixel_x_(0),
    pixel_y_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

void SSL_DetectionRobot::InitAsDefaultInstance() {}

SSL_DetectionRobot::SSL_DetectionRobot(const SSL_DetectionRobot& from)
  : ::google::protobuf::Message(),
    _cached_size_(0),
    area_(0u),
    x_(0),
    y_(0),
    pixel_x_(0),
    pixel_y_(0) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

SSL_DetectionRobot::~SSL_DetectionRobot() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* SSL_DetectionRobot::descriptor() {
  if (SSL_DetectionRobot_descriptor_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionRobot_descriptor_;
}

const SSL_DetectionRobot& SSL_DetectionRobot::default_instance() {
  if (default_instance_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return *default_instance_;
}

SSL_DetectionRobot* SSL_DetectionRobot::default_instance_ = NULL;

SSL_DetectionRobot* SSL_DetectionRobot::New() const {
  return new SSL_DetectionRobot;
}

const ::google::protobuf::Descriptor* SSL_DetectionRobot::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* SSL_DetectionRobot::GetReflection() const {
  if (SSL_DetectionRobot_reflection_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionRobot_reflection_;
}

// ===================================================================






SSL_DetectionFrame::SSL_DetectionFrame()
  : ::google::protobuf::Message(),
    _cached_size_(0),
    frame_number_(0u),
    timestamp_(GOOGLE_ULONGLONG(0)),
    camera_id_(0u) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

void SSL_DetectionFrame::InitAsDefaultInstance() {}

SSL_DetectionFrame::SSL_DetectionFrame(const SSL_DetectionFrame& from)
  : ::google::protobuf::Message(),
    _cached_size_(0),
    frame_number_(0u),
    timestamp_(GOOGLE_ULONGLONG(0)),
    camera_id_(0u) {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  MergeFrom(from);
}

SSL_DetectionFrame::~SSL_DetectionFrame() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* SSL_DetectionFrame::descriptor() {
  if (SSL_DetectionFrame_descriptor_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionFrame_descriptor_;
}

const SSL_DetectionFrame& SSL_DetectionFrame::default_instance() {
  if (default_instance_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return *default_instance_;
}

SSL_DetectionFrame* SSL_DetectionFrame::default_instance_ = NULL;

SSL_DetectionFrame* SSL_DetectionFrame::New() const {
  return new SSL_DetectionFrame;
}

const ::google::protobuf::Descriptor* SSL_DetectionFrame::GetDescriptor() const {
  return descriptor();
}

const ::google::protobuf::Reflection* SSL_DetectionFrame::GetReflection() const {
  if (SSL_DetectionFrame_reflection_ == NULL) protobuf_BuildDesc_messages_5frobocup_5fssl_5fdetection_2eproto();
  return SSL_DetectionFrame_reflection_;
}
